# CoreFoundation
[![Build Status](https://travis-ci.org/baberthal/core_foundation.svg?branch=master)](https://travis-ci.org/baberthal/core_foundation)

A set of ruby bindings for Apple's CoreFoundation Library.

You may ask yourself _but why?_ Mostly because I wanted to [see if I could][JP].
Is this a good idea? _Probably not_.

Until apple releases [CF-1256.14][CF], this will only build on a mac. In the
future, I plan on building the CoreFoundation framework as part of the gem so it
can be built on linux machines.

## Installation

Add this line to your application's Gemfile:

```ruby
gem 'core_foundation'
```

And then execute:

    $ bundle

Or install it yourself as:

    $ gem install core_foundation

Note that the build will likely fail on anything but a mac.

## Usage

TODO: Write usage instructions here

## Development

After checking out the repo, run `bin/setup` to install dependencies.
Then, run `rake spec` to run the tests. You can also run `bin/console` for an
interactive prompt that will allow you to experiment.

To install this gem onto your local machine, run `bundle exec rake install`.
To build the gem's native extensions, run `bundle exec rake compile`.
To clean the build directory, run `bundle exec rake clean`.
To clobber the build (i.e. clean built products), run `bundle exec rake clobber`.

## Contributing

Bug reports and pull requests are welcome on GitHub at
https://github.com/[USERNAME]/core_foundation. This project is intended to be a
safe, welcoming space for collaboration, and contributors are expected to adhere
to the [Contributor Covenant](http://contributor-covenant.org) code of conduct.


## License

The gem is available as open source under the terms of the [MIT License](http://opensource.org/licenses/MIT).

[JP]: http://imgur.com/anCjzwyh
[CF]: http://www.opensource.apple.com/release/os-x-10112/
[//]: # ( vim: set ts=8 sw=4 tw=80 ft=markdown et :)
